
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (struct net_device*,int) ;
 scalar_t__ FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, char **VAR_1,
     off_t VAR_2, int VAR_3,
     int *VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;


 int VAR_7 = 0;
 int VAR_8,VAR_9,VAR_10;

 int VAR_11=0xff;
 VAR_10 = 0x100;


  VAR_7 += FUNC_1(VAR_0 + VAR_7, VAR_3 - VAR_7,
    "\n####################page %x##################\n ", (VAR_10>>8));
  for(VAR_9=0;VAR_9<=VAR_11;)
  {
   VAR_7 += FUNC_1(VAR_0 + VAR_7, VAR_3 - VAR_7,
     "\nD:  %2x > ",VAR_9);
   for(VAR_8=0;VAR_8<16 && VAR_9<=VAR_11;VAR_8++,VAR_9++)
    VAR_7 += FUNC_1(VAR_0 + VAR_7, VAR_3 - VAR_7,
      "%2.2x ",FUNC_0(VAR_6,(VAR_10|VAR_9)));
  }
 VAR_7 += FUNC_1(VAR_0 + VAR_7, VAR_3 - VAR_7,"\n");
 *VAR_4 = 1;
 return VAR_7;

}
