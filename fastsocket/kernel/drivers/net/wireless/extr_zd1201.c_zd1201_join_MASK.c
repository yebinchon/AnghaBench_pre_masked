
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd1201 {TYPE_1__* dev; int ap; } ;
typedef int __le16 ;
struct TYPE_2__ {char* dev_addr; int addr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct zd1201*) ;
 int FUNC_4 (struct zd1201*) ;
 int FUNC_5 (struct zd1201*,int ,char*,int,int) ;
 int FUNC_6 (struct zd1201*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct zd1201 *VAR_7, char *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 char VAR_12[VAR_0+2];

 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_11 = VAR_1;
 VAR_11 |= VAR_2;
 VAR_10 = FUNC_6(VAR_7, VAR_3, VAR_11);
 if (VAR_10)
  return VAR_10;

 *(__le16 *)VAR_12 = FUNC_0(VAR_9);
 FUNC_1(VAR_12+2, VAR_8, VAR_9);
 if (!VAR_7->ap) {
  VAR_10 = FUNC_5(VAR_7, VAR_4, VAR_12,
      VAR_0+2, 1);
  if (VAR_10)
   return VAR_10;
 } else {
  VAR_10 = FUNC_5(VAR_7, VAR_6, VAR_12,
      VAR_0+2, 1);
  if (VAR_10)
   return VAR_10;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_5,
     VAR_7->dev->dev_addr, VAR_7->dev->addr_len, 1);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  return VAR_10;

 FUNC_2(100);
 return 0;
}
