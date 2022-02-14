
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;

int FUNC_1(char *VAR_2, size_t VAR_3,
     size_t *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 < 192) {
  VAR_2[0] = VAR_3;
  (*VAR_4) = 1;
 } else if (VAR_3 < 65536) {
  VAR_2[0] = (((VAR_3 - 192) / 256) + 192);
  VAR_2[1] = ((VAR_3 - 192) % 256);
  (*VAR_4) = 2;
 } else {
  VAR_5 = -VAR_0;
  FUNC_0(VAR_1,
    "Unsupported packet size: [%d]\n", VAR_3);
 }
 return VAR_5;
}
