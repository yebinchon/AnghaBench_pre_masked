
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {struct spi_device* if_priv; } ;
struct spi_device {int dummy; } ;



__attribute__((used)) static struct spi_device *FUNC_0(struct wl1251 *VAR_0)
{
 return VAR_0->if_priv;
}
