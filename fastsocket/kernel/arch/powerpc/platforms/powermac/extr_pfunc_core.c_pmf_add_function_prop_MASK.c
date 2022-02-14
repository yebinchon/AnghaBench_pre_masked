
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct pmf_function {char const* name; void** data; unsigned int length; int link; void* phandle; void* flags; struct pmf_device* dev; void* driver_data; int node; int irq_clients; int ref; } ;
struct pmf_device {int functions; int node; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pmf_function*) ;
 int FUNC_3 (int *) ;
 struct pmf_function* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct pmf_device*) ;
 scalar_t__ FUNC_7 (struct pmf_function*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_8(struct pmf_device *VAR_1, void *VAR_2,
     const char *VAR_3, u32 *VAR_4,
     unsigned int VAR_5)
{
 int VAR_6 = 0;
 struct pmf_function *VAR_7 = ((void*)0);

 FUNC_0("pmf: Adding functions for platform-do-%s\n", VAR_3);

 while (VAR_5 >= 12) {

  VAR_7 = FUNC_4(sizeof(struct pmf_function), VAR_0);
  if (VAR_7 == ((void*)0))
   goto bail;
  FUNC_3(&VAR_7->ref);
  FUNC_1(&VAR_7->irq_clients);
  VAR_7->node = VAR_1->node;
  VAR_7->driver_data = VAR_2;
  VAR_7->name = VAR_3;
  VAR_7->phandle = VAR_4[0];
  VAR_7->flags = VAR_4[1];
  VAR_4 += 2;
  VAR_5 -= 8;
  VAR_7->data = VAR_4;
  VAR_7->length = VAR_5;
  VAR_7->dev = VAR_1;
  FUNC_0("pmf: idx %d: flags=%08x, phandle=%08x "
      " %d bytes remaining, parsing...\n",
      VAR_6+1, VAR_7->flags, VAR_7->phandle, VAR_5);
  if (FUNC_7(VAR_7, ((void*)0), ((void*)0), ((void*)0))) {
   FUNC_2(VAR_7);
   goto bail;
  }
  VAR_5 -= VAR_7->length;
  VAR_4 = (u32 *)(((u8 *)VAR_4) + VAR_7->length);
  FUNC_5(&VAR_7->link, &VAR_1->functions);
  FUNC_6(VAR_1);
  VAR_6++;
 }
 bail:
 FUNC_0("pmf: Added %d functions\n", VAR_6);

 return VAR_6;
}
