
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;






 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,unsigned char**,int *,int ) ;
 int FUNC_1 (int ,unsigned char**,int *,int ) ;
 int FUNC_2 (int ,unsigned char**,int *,int *,int ) ;
 int FUNC_3 (int ,unsigned char**,int *,int ) ;
 int FUNC_4 (int ,unsigned char**,int *,int *,int ) ;
 int FUNC_5 (int ,unsigned char**,int *,int *,int ,int *) ;
 unsigned long long FUNC_6 () ;
 scalar_t__ FUNC_7 (unsigned long long*,int) ;

__attribute__((used)) static inline int FUNC_8(int VAR_11,
     unsigned int VAR_12)
{
 unsigned long long VAR_13[2];
 unsigned char VAR_14[16];
 int VAR_15;

 if (VAR_12 & VAR_1 &&
     !(FUNC_6() & 1ULL << (31 - 17)))
  return 0;

 if (VAR_12 & VAR_2 ||
     VAR_12 & VAR_3)
  if (FUNC_7(VAR_13, 2) <= 0)
   return 0;

 if (VAR_12 & VAR_2 &&
     !(VAR_13[1] & (1ULL << (63 - (76 - 64)))))
  return 0;
 if (VAR_12 & VAR_3 &&
     !(VAR_13[1] & (1ULL << (63 - (77 - 64)))))
  return 0;

 switch (VAR_11 & VAR_4) {
 case 131:
  VAR_15 = FUNC_2(VAR_10, &VAR_14, ((void*)0), ((void*)0), 0);
  break;
 case 129:
  VAR_15 = FUNC_4(VAR_9, &VAR_14, ((void*)0), ((void*)0), 0);
  break;
 case 133:
  VAR_15 = FUNC_0(VAR_5, &VAR_14, ((void*)0), 0);
  break;
 case 132:
  VAR_15 = FUNC_1(VAR_6, &VAR_14, ((void*)0), 0);
  break;
 case 130:
  VAR_15 = FUNC_3(VAR_7, &VAR_14, ((void*)0), 0);
  break;
 case 128:
  VAR_15 = FUNC_5(VAR_8, &VAR_14, ((void*)0), ((void*)0), 0,
           ((void*)0));
  break;
 default:
  return 0;
 }
 if (VAR_15 < 0)
  return 0;
 VAR_11 &= VAR_0;
 VAR_11 &= 0x7f;
 return (VAR_14[VAR_11 >> 3] & (0x80 >> (VAR_11 & 7))) != 0;
}
