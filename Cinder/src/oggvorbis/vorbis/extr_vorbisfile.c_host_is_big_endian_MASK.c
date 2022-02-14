
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ogg_int32_t ;



__attribute__((used)) static int FUNC_0() {
  ogg_int32_t VAR_0 = 0xfeedface;
  unsigned char *VAR_1 = (unsigned char *)&VAR_0;
  if (VAR_1[0] == 0xfe) return 1;
  return 0;
}
