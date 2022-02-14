
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 unsigned long* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void)
{
 unsigned long *VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = FUNC_1(VAR_3);

 *VAR_4++ = 0xb858 | (VAR_2 << 16) | (0x80cdUL << 48);


 *VAR_4 = 0xb8 | (VAR_1 << 8) | (0x80cdUL << 40);
}
