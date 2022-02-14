
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_3__ {int length_dw; } ;
struct radeon_cs_parser {int chunk_ib_idx; int cs_flags; TYPE_1__ ib; scalar_t__ parser_error; int ring; struct radeon_cs_chunk* chunks; } ;
struct radeon_cs_chunk {int length_dw; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct radeon_cs_parser*) ;
 int FUNC_2 (struct radeon_device*,int ,struct radeon_cs_parser*) ;
 int FUNC_3 (struct radeon_cs_parser*) ;
 int FUNC_4 (struct radeon_device*,int ,TYPE_1__*,int *,int) ;
 int FUNC_5 (struct radeon_device*,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_6(struct radeon_device *VAR_1,
         struct radeon_cs_parser *VAR_2)
{
 struct radeon_cs_chunk *VAR_3;
 int VAR_4;

 if (VAR_2->chunk_ib_idx == -1)
  return 0;

 if (VAR_2->cs_flags & VAR_0)
  return 0;

 VAR_3 = &VAR_2->chunks[VAR_2->chunk_ib_idx];




 VAR_4 = FUNC_4(VAR_1, VAR_2->ring, &VAR_2->ib,
      ((void*)0), VAR_3->length_dw * 4);
 if (VAR_4) {
  FUNC_0("Failed to get ib !\n");
  return VAR_4;
 }
 VAR_2->ib.length_dw = VAR_3->length_dw;
 VAR_4 = FUNC_2(VAR_1, VAR_2->ring, VAR_2);
 if (VAR_4 || VAR_2->parser_error) {
  FUNC_0("Invalid command stream !\n");
  return VAR_4;
 }
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4) {
  FUNC_0("Invalid command stream !\n");
  return VAR_4;
 }
 FUNC_3(VAR_2);
 VAR_4 = FUNC_5(VAR_1, &VAR_2->ib, ((void*)0));
 if (VAR_4) {
  FUNC_0("Failed to schedule IB !\n");
 }
 return VAR_4;
}
