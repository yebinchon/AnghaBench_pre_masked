
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_target {char* error; } ;
struct TYPE_3__ {int shift; } ;
struct TYPE_4__ {TYPE_1__ benbi; } ;
struct crypt_config {TYPE_2__ iv_gen_private; int tfm; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypt_config *VAR_1, struct dm_target *VAR_2,
         const char *VAR_3)
{
 unsigned VAR_4 = FUNC_0(VAR_1->tfm);
 int VAR_5 = FUNC_1(VAR_4);




 if (1 << VAR_5 != VAR_4) {
  VAR_2->error = "cypher blocksize is not a power of 2";
  return -VAR_0;
 }

 if (VAR_5 > 9) {
  VAR_2->error = "cypher blocksize is > 512";
  return -VAR_0;
 }

 VAR_1->iv_gen_private.benbi.shift = 9 - VAR_5;

 return 0;
}
