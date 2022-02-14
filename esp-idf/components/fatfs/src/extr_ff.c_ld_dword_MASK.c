
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;



__attribute__((used)) static DWORD FUNC_0 (const BYTE* VAR_0)
{
 DWORD VAR_1;

 VAR_1 = VAR_0[3];
 VAR_1 = VAR_1 << 8 | VAR_0[2];
 VAR_1 = VAR_1 << 8 | VAR_0[1];
 VAR_1 = VAR_1 << 8 | VAR_0[0];
 return VAR_1;
}
