
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edd_device {int mbr_signature; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_1(struct edd_device *VAR_1, char *VAR_2)
{
 char *VAR_3 = VAR_2;
 VAR_3 += FUNC_0(VAR_3, VAR_0, "0x%08x\n", VAR_1->mbr_signature);
 return (VAR_3 - VAR_2);
}
