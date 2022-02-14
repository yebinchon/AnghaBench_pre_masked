
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zr36060 {int scalefact; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zr36060*,int ) ;

__attribute__((used)) static u16
FUNC_1 (struct zr36060 *VAR_2)
{
 VAR_2->scalefact = (FUNC_0(VAR_2, VAR_0) << 8) |
    (FUNC_0(VAR_2, VAR_1) & 0xFF);


 FUNC_0(VAR_2, 0);
 return VAR_2->scalefact;
}
