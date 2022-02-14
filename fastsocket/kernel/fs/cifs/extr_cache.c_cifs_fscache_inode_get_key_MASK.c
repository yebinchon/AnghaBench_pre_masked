
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct cifsInodeInfo {int uniqueid; } ;


 int FUNC_0 (void*,int *,int) ;

__attribute__((used)) static uint16_t FUNC_1(const void *VAR_0,
        void *VAR_1, uint16_t VAR_2)
{
 const struct cifsInodeInfo *VAR_3 = VAR_0;
 uint16_t VAR_4;


 VAR_4 = sizeof(VAR_3->uniqueid);
 if (VAR_4 > VAR_2)
  VAR_4 = 0;
 else
  FUNC_0(VAR_1, &VAR_3->uniqueid, VAR_4);

 return VAR_4;
}
