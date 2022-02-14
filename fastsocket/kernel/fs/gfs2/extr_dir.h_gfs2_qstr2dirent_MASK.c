
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qstr {int len; int name; int hash; } ;
struct TYPE_2__ {void* no_formal_ino; void* no_addr; } ;
struct gfs2_dirent {int __pad; void* de_type; void* de_name_len; void* de_rec_len; int de_hash; TYPE_1__ de_inum; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct gfs2_dirent*,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_5(const struct qstr *VAR_0, u16 VAR_1, struct gfs2_dirent *VAR_2)
{
 VAR_2->de_inum.no_addr = FUNC_2(0);
 VAR_2->de_inum.no_formal_ino = FUNC_2(0);
 VAR_2->de_hash = FUNC_1(VAR_0->hash);
 VAR_2->de_rec_len = FUNC_0(VAR_1);
 VAR_2->de_name_len = FUNC_0(VAR_0->len);
 VAR_2->de_type = FUNC_0(0);
 FUNC_4(VAR_2->__pad, 0, sizeof(VAR_2->__pad));
 FUNC_3(VAR_2 + 1, VAR_0->name, VAR_0->len);
}
