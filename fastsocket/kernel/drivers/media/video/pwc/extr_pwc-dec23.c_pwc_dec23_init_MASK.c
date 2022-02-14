
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {struct pwc_dec23_private* decompress_data; } ;
struct pwc_dec23_private {int nbits; int nbitsmask; scalar_t__ scalebits; int table_8004_pass2; int table_0004_pass2; int table_8004_pass1; int table_0004_pass1; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int ** VAR_5 ;
 int FUNC_1 (struct pwc_dec23_private*) ;
 int FUNC_2 (struct pwc_dec23_private*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct pwc_dec23_private*) ;
 struct pwc_dec23_private* FUNC_5 (int,int ) ;
 int* VAR_6 ;

int FUNC_6(struct pwc_device *VAR_7, int VAR_8, unsigned char *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 struct pwc_dec23_private *VAR_14;

 if (VAR_7->decompress_data == ((void*)0)) {
  VAR_14 = FUNC_5(sizeof(struct pwc_dec23_private), VAR_1);
  if (VAR_14 == ((void*)0))
   return -VAR_0;
  VAR_7->decompress_data = VAR_14;
 }
 VAR_14 = VAR_7->decompress_data;

 if (FUNC_0(VAR_8)) {
  VAR_10 = VAR_9[2] & 0x18;
  if (VAR_10 == 8)
   VAR_14->nbits = 7;
  else if (VAR_10 == 0x10)
   VAR_14->nbits = 8;
  else
   VAR_14->nbits = 6;

  VAR_11 = VAR_9[2] >> 5;
  FUNC_3(VAR_2[VAR_11][0], VAR_14->table_0004_pass1, VAR_14->table_8004_pass1);
  FUNC_3(VAR_2[VAR_11][1], VAR_14->table_0004_pass2, VAR_14->table_8004_pass2);

 } else {

  VAR_10 = VAR_9[2] & 6;
  if (VAR_10 == 2)
   VAR_14->nbits = 7;
  else if (VAR_10 == 4)
   VAR_14->nbits = 8;
  else
   VAR_14->nbits = 6;

  VAR_11 = VAR_9[2] >> 3;
  FUNC_3(VAR_5[VAR_11][0], VAR_14->table_0004_pass1, VAR_14->table_8004_pass1);
  FUNC_3(VAR_5[VAR_11][1], VAR_14->table_0004_pass2, VAR_14->table_8004_pass2);
 }


 VAR_12 = 8 - VAR_14->nbits;
 VAR_14->scalebits = VAR_4 - VAR_12;
 VAR_14->nbitsmask = 0xFF >> VAR_12;

 FUNC_4(VAR_14);
 FUNC_2(VAR_14);
 FUNC_1(VAR_14);
 return 0;
}
