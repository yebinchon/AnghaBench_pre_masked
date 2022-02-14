
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int,int ) ;
 scalar_t__ FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_4(char *VAR_1, char **VAR_2,
     off_t VAR_3, int VAR_4,
     int *VAR_5, void *VAR_6)
{
 struct net_device *VAR_7 = VAR_6;


 int VAR_8 = 0;
 int VAR_9,VAR_10,VAR_11,VAR_12,VAR_13;

 int VAR_14=0xff;
 VAR_11 = 0x000;
 VAR_12 = 0x100;
 VAR_13 = 0x800;


 if(!FUNC_0(VAR_11)){
  VAR_8 += FUNC_3(VAR_1 + VAR_8, VAR_4 - VAR_8,
    "\n####################page %x##################\n ", (VAR_11>>8));
  for(VAR_10=0;VAR_10<=VAR_14;)
  {
   VAR_8 += FUNC_3(VAR_1 + VAR_8, VAR_4 - VAR_8,
     "\nD:  %2x > ",VAR_10);
   for(VAR_9=0;VAR_9<16 && VAR_10<=VAR_14;VAR_9++,VAR_10++)
    VAR_8 += FUNC_3(VAR_1 + VAR_8, VAR_4 - VAR_8,
      "%2.2x ",FUNC_1(VAR_7,(VAR_11|VAR_10)));
  }
 }else{
  VAR_8 += FUNC_3(VAR_1 + VAR_8, VAR_4 - VAR_8,
    "\n####################page %x##################\n ", (VAR_11>>8));
  for(VAR_10=0;VAR_10<=VAR_14;)
  {
   VAR_8 += FUNC_3(VAR_1 + VAR_8, VAR_4 - VAR_8, "\nD:  %2x > ",VAR_10);
   for(VAR_9=0;VAR_9<4 && VAR_10<=VAR_14;VAR_10+=4,VAR_9++)
    VAR_8 += FUNC_3(VAR_1 + VAR_8, VAR_4 - VAR_8,
      "%8.8x ",FUNC_2(VAR_7,(VAR_11|VAR_10), VAR_0));
  }
 }
 VAR_8 += FUNC_3(VAR_1 + VAR_8, VAR_4 - VAR_8,"\n");
 *VAR_5 = 1;
 return VAR_8;

}
