
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (size_t) ;

unsigned char *FUNC_3(const char *VAR_0, int VAR_1, int *VAR_2) {
  int VAR_3, VAR_4, VAR_5, VAR_6;
  unsigned char *VAR_7 = (unsigned char *)FUNC_2((size_t)(VAR_1 * 3) / 4 + 1);
  unsigned char *VAR_8 = VAR_7;

  *VAR_2 = 0;

  while (1) {
    if (VAR_0[0] == 0) {
      *VAR_8 = '\0';
      return VAR_7;
    }


    if (VAR_0[0] == '\n' || VAR_0[0] == '\r') {
      VAR_0 += 1;
      continue;
    }

    VAR_3 = VAR_0[0];
    if (FUNC_0(VAR_3) == -1) goto base64_decode_error;
    VAR_4 = VAR_0[1];
    if (FUNC_0(VAR_4) == -1) goto base64_decode_error;
    VAR_5 = VAR_0[2];
    if ((VAR_5 != '=') && (FUNC_0(VAR_5) == -1)) goto base64_decode_error;
    VAR_6 = VAR_0[3];
    if ((VAR_6 != '=') && (FUNC_0(VAR_6) == -1)) goto base64_decode_error;

    VAR_0 += 4;
    *VAR_8++ = (unsigned char)((FUNC_0(VAR_3) << 2) | (FUNC_0(VAR_4) >> 4));
    *VAR_2 += 1;
    if (VAR_5 != '=') {
      *VAR_8++ = (unsigned char)(((FUNC_0(VAR_4) << 4) & 0xf0) | (FUNC_0(VAR_5) >> 2));
      *VAR_2 += 1;
      if (VAR_6 != '=') {
        *VAR_8++ = (unsigned char)(((FUNC_0(VAR_5) << 6) & 0xc0) | FUNC_0(VAR_6));
        *VAR_2 += 1;
      }
    }
  }

base64_decode_error:
  FUNC_1(VAR_7);
  *VAR_7 = 0;
  *VAR_2 = 0;

  return VAR_7;
}
