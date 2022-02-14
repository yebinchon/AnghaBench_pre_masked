
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pnp_id {int dummy; } ;
struct pnp_dev {char* name; int dev; } ;


 unsigned char VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,char*,...) ;
 struct pnp_id* FUNC_1 (struct pnp_dev*,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,unsigned char*,int) ;

__attribute__((used)) static unsigned char *FUNC_4(unsigned char *VAR_3,
         unsigned char *VAR_4,
         struct pnp_dev *VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8;
 char VAR_9[8];
 struct pnp_id *VAR_10;

 if (!VAR_3)
  return ((void*)0);

 while ((char *)VAR_3 < (char *)VAR_4) {


  if (VAR_3[0] & VAR_0) {
   VAR_6 = (VAR_3[2] << 8) | VAR_3[1];
   VAR_7 = VAR_3[0];
  } else {
   VAR_6 = VAR_3[0] & 0x07;
   VAR_7 = ((VAR_3[0] >> 3) & 0x0f);
  }

  switch (VAR_7) {

  case 130:
   FUNC_3(VAR_5->name, VAR_3 + 3,
    VAR_6 >= VAR_2 ? VAR_2 - 2 : VAR_6);
   VAR_5->name[VAR_6 >=
      VAR_2 ? VAR_2 - 1 : VAR_6] = '\0';
   break;

  case 129:
   if (VAR_6 != 4)
    goto len_err;
   VAR_8 = VAR_3[1] | VAR_3[2] << 8 | VAR_3[3] << 16 | VAR_3[4] << 24;
   FUNC_2(VAR_8 & VAR_1, VAR_9);
   VAR_10 = FUNC_1(VAR_5, VAR_9);
   if (!VAR_10)
    return ((void*)0);
   break;

  case 128:
   VAR_3 = VAR_3 + 2;
   return (unsigned char *)VAR_3;
   break;

  default:
len_err:
   FUNC_0(&VAR_5->dev, "unknown tag %#x length %d\n",
    VAR_7, VAR_6);
   break;
  }


  if (VAR_3[0] & VAR_0)
   VAR_3 += VAR_6 + 3;
  else
   VAR_3 += VAR_6 + 1;
 }

 FUNC_0(&VAR_5->dev, "no end tag in resource structure\n");

 return ((void*)0);
}
