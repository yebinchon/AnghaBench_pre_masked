
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;



__attribute__((used)) static int FUNC_0(const int VAR_0, const int VAR_1, const uint64_t* const VAR_2, const int VAR_3, const uint64_t* const VAR_4, const int VAR_5)
{
 if (VAR_0 == 3 && (VAR_2[0] & 7u) == ((1u << 0) | (1u << 1) | (1u << 2)) && VAR_4[0] == 1u)
  return 1;

 if (VAR_0 == 2 && (VAR_2[0] & 3u) == ((1u << 0) | (1u << 1)) && VAR_4[0] == 1u)
  return 1;
 return 0;
}
