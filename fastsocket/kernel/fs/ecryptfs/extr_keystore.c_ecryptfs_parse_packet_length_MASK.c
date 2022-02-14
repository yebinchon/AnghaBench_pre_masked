
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(unsigned char *VAR_2, size_t *VAR_3,
     size_t *VAR_4)
{
 int VAR_5 = 0;

 (*VAR_4) = 0;
 (*VAR_3) = 0;
 if (VAR_2[0] < 192) {

  (*VAR_3) = (unsigned char)VAR_2[0];
  (*VAR_4) = 1;
 } else if (VAR_2[0] < 224) {

  (*VAR_3) = (((unsigned char)(VAR_2[0]) - 192) * 256);
  (*VAR_3) += ((unsigned char)(VAR_2[1]) + 192);
  (*VAR_4) = 2;
 } else if (VAR_2[0] == 255) {

  FUNC_0(VAR_1, "Five-byte packet length not "
    "supported\n");
  VAR_5 = -VAR_0;
  goto out;
 } else {
  FUNC_0(VAR_1, "Error parsing packet length\n");
  VAR_5 = -VAR_0;
  goto out;
 }
out:
 return VAR_5;
}
