
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ibmvfc_async_desc {scalar_t__ ae; } ;


 int FUNC_0 (struct ibmvfc_async_desc const*) ;
 struct ibmvfc_async_desc const* VAR_0 ;
 struct ibmvfc_async_desc const VAR_1 ;

__attribute__((used)) static const struct ibmvfc_async_desc *FUNC_1(u64 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_0[VAR_3].ae == VAR_2)
   return &VAR_0[VAR_3];

 return &VAR_1;
}
