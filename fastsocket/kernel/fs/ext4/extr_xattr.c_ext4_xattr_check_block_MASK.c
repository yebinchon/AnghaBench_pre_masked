
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct buffer_head {scalar_t__ b_size; scalar_t__ b_data; } ;
struct TYPE_2__ {scalar_t__ h_magic; scalar_t__ h_blocks; } ;


 int FUNC_0 (struct buffer_head*) ;
 TYPE_1__* FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_4(struct buffer_head *VAR_2)
{
 int VAR_3;

 if (FUNC_1(VAR_2)->h_magic != FUNC_2(VAR_1) ||
     FUNC_1(VAR_2)->h_blocks != FUNC_2(1))
  return -VAR_0;
 VAR_3 = FUNC_3(FUNC_0(VAR_2), VAR_2->b_data + VAR_2->b_size);
 return VAR_3;
}
