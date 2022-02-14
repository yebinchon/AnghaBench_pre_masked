
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {scalar_t__ is_zd1211b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char*,int ,char const*) ;

__attribute__((used)) static char *FUNC_1(struct zd_usb *VAR_2, char *VAR_3, size_t VAR_4,
                const char* VAR_5)
{
 FUNC_0(VAR_3, VAR_4, "%s%s",
  VAR_2->is_zd1211b ?
   VAR_0 : VAR_1,
  VAR_5);
 return VAR_3;
}
