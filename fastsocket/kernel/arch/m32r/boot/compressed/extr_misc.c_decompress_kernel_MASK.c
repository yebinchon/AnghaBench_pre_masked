
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,int,int *,int *,unsigned char*,int *,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (char*) ;

void
FUNC_2(int VAR_5, unsigned char *VAR_6,
    unsigned int VAR_7, unsigned long VAR_8)
{
 unsigned char *VAR_9 = VAR_6;
 int VAR_10 = VAR_7;
 unsigned char *VAR_11;

 VAR_11 = (unsigned char *)VAR_1 + 0x2000
  + (VAR_5 ? 0x80000000 : 0);
 VAR_4 = VAR_8;
 VAR_3 = VAR_4 + VAR_0;

 FUNC_1("\nDecompressing Linux... ");
 FUNC_0(VAR_9, VAR_10, ((void*)0), ((void*)0), VAR_11, ((void*)0), VAR_2);
 FUNC_1("done.\nBooting the kernel.\n");
}
