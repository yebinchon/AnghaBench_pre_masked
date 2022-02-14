
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int * tmp_rbuf; scalar_t__ max_frame_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct slgt_info *VAR_2)
{
 VAR_2->tmp_rbuf = FUNC_0(VAR_2->max_frame_size + 5, VAR_1);
 if (VAR_2->tmp_rbuf == ((void*)0))
  return -VAR_0;
 return 0;
}
