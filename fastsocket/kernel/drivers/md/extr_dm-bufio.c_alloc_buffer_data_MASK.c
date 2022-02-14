
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_bufio_client {scalar_t__ block_size; int pages_per_block_bits; } ;
typedef int gfp_t ;
typedef enum data_mode { ____Placeholder_data_mode } data_mode ;
struct TYPE_2__ {unsigned int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dm_bufio_client*) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int,int ) ;
 void* FUNC_2 (scalar_t__,int,int ) ;
 TYPE_1__* VAR_9 ;
 void* FUNC_3 (int ,int) ;

__attribute__((used)) static void *FUNC_4(struct dm_bufio_client *VAR_10, gfp_t VAR_11,
          enum data_mode *VAR_12)
{
 unsigned VAR_13;
 void *VAR_14;

 if (VAR_10->block_size <= VAR_4) {
  *VAR_12 = VAR_1;
  return FUNC_3(FUNC_0(VAR_10), VAR_11);
 }

 if (VAR_10->block_size <= VAR_3 &&
     VAR_11 & VAR_8) {
  *VAR_12 = VAR_0;
  return (void *)FUNC_1(VAR_11,
      VAR_10->pages_per_block_bits);
 }

 *VAR_12 = VAR_2;
 if (VAR_11 & VAR_8) {
  VAR_13 = VAR_9->flags & VAR_6;
  VAR_9->flags |= VAR_6;
 }

 VAR_14 = FUNC_2(VAR_10->block_size, VAR_11 | VAR_7, VAR_5);

 if (VAR_11 & VAR_8)
  VAR_9->flags = (VAR_9->flags & ~VAR_6) | VAR_13;

 return VAR_14;
}
