
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct fscache_netfs {int name; int version; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (void*,int ,unsigned int) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static uint16_t FUNC_3(const void *VAR_0,
         void *VAR_1, uint16_t VAR_2)
{
 const struct fscache_netfs *VAR_3 = VAR_0;
 unsigned VAR_4;

 FUNC_0("{%s.%u},", VAR_3->name, VAR_3->version);

 VAR_4 = FUNC_2(VAR_3->name);
 if (VAR_4 > VAR_2)
  return 0;

 FUNC_1(VAR_1, VAR_3->name, VAR_4);
 return VAR_4;
}
