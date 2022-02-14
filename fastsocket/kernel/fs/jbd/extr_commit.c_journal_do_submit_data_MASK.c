
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_end_io; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct buffer_head*) ;

__attribute__((used)) static void FUNC_1(struct buffer_head **VAR_1, int VAR_2,
       int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_1[VAR_4]->b_end_io = VAR_0;

  FUNC_0(VAR_3, VAR_1[VAR_4]);
 }
}
