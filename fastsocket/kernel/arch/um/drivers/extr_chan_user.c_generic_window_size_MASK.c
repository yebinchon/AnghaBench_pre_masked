
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {unsigned short ws_row; unsigned short ws_col; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,struct winsize*) ;

int FUNC_1(int VAR_2, void *VAR_3, unsigned short *VAR_4,
   unsigned short *VAR_5)
{
 struct winsize VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_2, VAR_0, &VAR_6) < 0)
  return -VAR_1;

 VAR_7 = ((*VAR_4 != VAR_6.ws_row) || (*VAR_5 != VAR_6.ws_col));

 *VAR_4 = VAR_6.ws_row;
 *VAR_5 = VAR_6.ws_col;

 return VAR_7;
}
