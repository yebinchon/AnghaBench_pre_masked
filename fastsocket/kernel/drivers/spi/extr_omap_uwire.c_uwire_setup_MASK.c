
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwire_state {int dummy; } ;
struct spi_device {struct uwire_state* controller_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uwire_state* FUNC_0 (int,int ) ;
 int FUNC_1 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_2)
{
 struct uwire_state *VAR_3 = VAR_2->controller_state;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1);
  if (VAR_3 == ((void*)0))
   return -VAR_0;
  VAR_2->controller_state = VAR_3;
 }

 return FUNC_1(VAR_2, ((void*)0));
}
