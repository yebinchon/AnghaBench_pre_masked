
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tuple_t ;
struct pcmcia_device {int dummy; } ;
typedef int cisparse_t ;


 int FUNC_0 (struct pcmcia_device*,int *) ;
 int FUNC_1 (struct pcmcia_device*,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_0, tuple_t *VAR_1,
  cisparse_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3 != 0)
  return VAR_3;
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3 != 0)
  return VAR_3;
 return FUNC_2(VAR_1, VAR_2);
}
