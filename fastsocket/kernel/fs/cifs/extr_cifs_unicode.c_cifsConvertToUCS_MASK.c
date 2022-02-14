
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int (* char2uni ) (char const*,int,int*) ;} ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char const*,int ,struct nls_table const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*,int,int*) ;

int
FUNC_4(__le16 *VAR_7, const char *VAR_8, int VAR_9,
   const struct nls_table *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 char VAR_15;
 __le16 VAR_16;
 wchar_t VAR_17;

 if (!VAR_11)
  return FUNC_0(VAR_7, VAR_8, VAR_0, VAR_10);

 for (VAR_12 = 0, VAR_13 = 0; VAR_12 < VAR_9; VAR_13++) {
  VAR_15 = VAR_8[VAR_12];
  VAR_14 = 1;
  switch (VAR_15) {
  case 0:
   FUNC_2(0, &VAR_7[VAR_13]);
   goto ctoUCS_out;
  case ':':
   VAR_16 = FUNC_1(VAR_2);
   break;
  case '*':
   VAR_16 = FUNC_1(VAR_1);
   break;
  case '?':
   VAR_16 = FUNC_1(VAR_6);
   break;
  case '<':
   VAR_16 = FUNC_1(VAR_4);
   break;
  case '>':
   VAR_16 = FUNC_1(VAR_3);
   break;
  case '|':
   VAR_16 = FUNC_1(VAR_5);
   break;





  default:
   VAR_14 = VAR_10->char2uni(VAR_8 + VAR_12, VAR_9 - VAR_12, &VAR_17);
   VAR_16 = FUNC_1(VAR_17);





   if (VAR_14 < 1) {
    VAR_16 = FUNC_1(0x003f);
    VAR_14 = 1;
   }
  }




  VAR_12 += VAR_14;
  FUNC_2(VAR_16, &VAR_7[VAR_13]);
 }

ctoUCS_out:
 return VAR_12;
}
