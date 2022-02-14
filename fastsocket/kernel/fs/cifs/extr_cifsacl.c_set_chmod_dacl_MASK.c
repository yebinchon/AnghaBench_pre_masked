
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cifs_sid {int dummy; } ;
struct cifs_acl {int num_aces; int size; } ;
struct cifs_ace {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cifs_ace*,struct cifs_sid*,int ,int ) ;
 struct cifs_sid VAR_3 ;

__attribute__((used)) static int FUNC_3(struct cifs_acl *VAR_4, struct cifs_sid *VAR_5,
   struct cifs_sid *VAR_6, __u64 VAR_7)
{
 u16 VAR_8 = 0;
 struct cifs_acl *VAR_9;

 VAR_9 = (struct cifs_acl *)((char *)VAR_4 + sizeof(struct cifs_acl));

 VAR_8 += FUNC_2((struct cifs_ace *) ((char *)VAR_9 + VAR_8),
     VAR_5, VAR_7, VAR_2);
 VAR_8 += FUNC_2((struct cifs_ace *)((char *)VAR_9 + VAR_8),
     VAR_6, VAR_7, VAR_0);
 VAR_8 += FUNC_2((struct cifs_ace *)((char *)VAR_9 + VAR_8),
      &VAR_3, VAR_7, VAR_1);

 VAR_4->size = FUNC_0(VAR_8 + sizeof(struct cifs_acl));
 VAR_4->num_aces = FUNC_1(3);

 return 0;
}
