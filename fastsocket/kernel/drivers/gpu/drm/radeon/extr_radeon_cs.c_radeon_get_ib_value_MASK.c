
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_cs_parser {size_t chunk_ib_idx; int parser_error; struct radeon_cs_chunk* chunks; } ;
struct radeon_cs_chunk {int* kpage_idx; int** kpage; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_cs_parser*,int) ;

u32 FUNC_1(struct radeon_cs_parser *VAR_1, int VAR_2)
{
 struct radeon_cs_chunk *VAR_3 = &VAR_1->chunks[VAR_1->chunk_ib_idx];
 u32 VAR_4, VAR_5;
 u32 VAR_6 = 0;
 int VAR_7;

 VAR_4 = (VAR_2 * 4) / VAR_0;
 VAR_5 = (VAR_2 * 4) % VAR_0;

 if (VAR_3->kpage_idx[0] == VAR_4)
  return VAR_3->kpage[0][VAR_5/4];
 if (VAR_3->kpage_idx[1] == VAR_4)
  return VAR_3->kpage[1][VAR_5/4];

 VAR_7 = FUNC_0(VAR_1, VAR_4);
 if (VAR_7 < 0) {
  VAR_1->parser_error = VAR_7;
  return 0;
 }

 VAR_6 = VAR_3->kpage[VAR_7][VAR_5/4];
 return VAR_6;
}
