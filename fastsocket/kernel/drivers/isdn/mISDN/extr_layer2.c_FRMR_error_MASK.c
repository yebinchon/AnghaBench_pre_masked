
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct layer2 {int l2m; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct layer2*) ;
 int FUNC_1 (int *,char*,int,int,int,...) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct layer2 *VAR_4, struct sk_buff *VAR_5)
{
 u_int VAR_6 = FUNC_0(VAR_4) + 1;
 u_char *VAR_7 = VAR_5->data + VAR_6;
 int VAR_8 = *VAR_5->data & 0x2;

 if (FUNC_2(VAR_2, &VAR_4->flag))
  VAR_8 = !VAR_8;
 if (!VAR_8)
  return 'L';
 if (FUNC_2(VAR_1, &VAR_4->flag)) {
  if (VAR_5->len < VAR_6 + 5)
   return 'N';
  else if (*VAR_3 & VAR_0)
   FUNC_1(&VAR_4->l2m,
       "FRMR information %2x %2x %2x %2x %2x",
       VAR_7[0], VAR_7[1], VAR_7[2], VAR_7[3], VAR_7[4]);
 } else {
  if (VAR_5->len < VAR_6 + 3)
   return 'N';
  else if (*VAR_3 & VAR_0)
   FUNC_1(&VAR_4->l2m,
       "FRMR information %2x %2x %2x",
       VAR_7[0], VAR_7[1], VAR_7[2]);
 }
 return 0;
}
