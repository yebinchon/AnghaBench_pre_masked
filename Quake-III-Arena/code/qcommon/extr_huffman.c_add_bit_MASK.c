
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char byte ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0 (char VAR_1, byte *VAR_2) {
 if ((VAR_0&7) == 0) {
  VAR_2[(VAR_0>>3)] = 0;
 }
 VAR_2[(VAR_0>>3)] |= VAR_1 << (VAR_0&7);
 VAR_0++;
}
