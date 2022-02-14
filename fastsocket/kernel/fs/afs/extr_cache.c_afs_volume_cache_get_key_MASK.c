
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct afs_volume {int type; } ;


 int FUNC_0 (char*,int ,void*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (void*,int *,int) ;

__attribute__((used)) static uint16_t FUNC_3(const void *VAR_0,
     void *VAR_1, uint16_t VAR_2)
{
 const struct afs_volume *VAR_3 = VAR_0;
 uint16_t VAR_4;

 FUNC_0("{%u},%p,%u", VAR_3->type, VAR_1, VAR_2);

 VAR_4 = sizeof(VAR_3->type);
 if (VAR_4 > VAR_2)
  return 0;

 FUNC_2(VAR_1, &VAR_3->type, sizeof(VAR_3->type));

 FUNC_1(" = %u", VAR_4);
 return VAR_4;

}
