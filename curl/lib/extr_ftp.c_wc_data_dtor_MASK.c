
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftp_wc {scalar_t__ parser; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct ftp_wc*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
  struct ftp_wc *VAR_1 = VAR_0;
  if(VAR_1 && VAR_1->parser)
    FUNC_0(&VAR_1->parser);
  FUNC_1(VAR_1);
}
