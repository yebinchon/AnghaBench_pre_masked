
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbat_info {int devicetype; } ;
struct us_data {scalar_t__ extra; } ;



__attribute__((used)) static int FUNC_0(struct us_data *VAR_0)
{
 return ((struct usbat_info*)VAR_0->extra)->devicetype;
}
