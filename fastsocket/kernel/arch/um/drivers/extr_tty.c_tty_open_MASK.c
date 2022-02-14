
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_chan {char* dev; int tt; scalar_t__ raw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(int VAR_4, int VAR_5, int VAR_6, void *VAR_7,
      char **VAR_8)
{
 struct tty_chan *VAR_9 = VAR_7;
 int VAR_10, VAR_11, VAR_12 = 0;

 if (VAR_4 && VAR_5)
  VAR_12 = VAR_1;
 else if (VAR_4)
  VAR_12 = VAR_0;
 else if (VAR_5)
  VAR_12 = VAR_2;

 VAR_10 = FUNC_1(VAR_9->dev, VAR_12);
 if (VAR_10 < 0)
  return -VAR_3;

 if (VAR_9->raw) {
  FUNC_0(VAR_11 = FUNC_3(VAR_10, &VAR_9->tt));
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_2(VAR_10);
  if (VAR_11)
   return VAR_11;
 }

 *VAR_8 = VAR_9->dev;
 return VAR_10;
}
