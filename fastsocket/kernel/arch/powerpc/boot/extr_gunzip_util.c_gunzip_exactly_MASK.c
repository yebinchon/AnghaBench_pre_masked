
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gunzip_state {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct gunzip_state*,void*,int) ;

void FUNC_2(struct gunzip_state *VAR_0, void *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < VAR_2)
  FUNC_0("\n\rgunzip_exactly: ran out of data!"
    " Wanted %d, got %d.\n\r", VAR_2, VAR_3);
}
