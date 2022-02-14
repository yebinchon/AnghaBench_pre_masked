
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,int ) ;
 size_t FUNC_3 (int,char*,size_t) ;
 int VAR_4 ;
 int FUNC_4 (int ,int) ;

char *FUNC_5(const char *VAR_5,
                char *VAR_6,
                size_t VAR_7)
{
  ssize_t VAR_8;
  bool VAR_9;
  int VAR_10 = FUNC_2("/dev/tty", VAR_1);
  if(-1 == VAR_10)
    VAR_10 = VAR_2;

  VAR_9 = FUNC_4(VAR_0, VAR_10);

  FUNC_1(VAR_5, VAR_4);
  VAR_8 = FUNC_3(VAR_10, VAR_6, VAR_7);
  if(VAR_8 > 0)
    VAR_6[--VAR_8] = '\0';
  else
    VAR_6[0] = '\0';

  if(VAR_9) {

    FUNC_1("\n", VAR_4);
    (void)FUNC_4(VAR_3, VAR_10);
  }

  if(VAR_2 != VAR_10)
    FUNC_0(VAR_10);

  return VAR_6;
}
