
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int name; } ;
struct afs_vlocation {TYPE_1__ vldb; } ;


 int FUNC_0 (char*,int ,void*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static uint16_t FUNC_4(const void *VAR_0,
         void *VAR_1, uint16_t VAR_2)
{
 const struct afs_vlocation *VAR_3 = VAR_0;
 uint16_t VAR_4;

 FUNC_0("{%s},%p,%u", VAR_3->vldb.name, VAR_1, VAR_2);

 VAR_4 = FUNC_3(VAR_3->vldb.name, sizeof(VAR_3->vldb.name));
 if (VAR_4 > VAR_2)
  return 0;

 FUNC_2(VAR_1, VAR_3->vldb.name, VAR_4);

 FUNC_1(" = %u", VAR_4);
 return VAR_4;
}
