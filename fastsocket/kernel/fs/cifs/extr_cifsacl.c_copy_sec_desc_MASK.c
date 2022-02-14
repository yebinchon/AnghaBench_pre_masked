
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_sid {int dummy; } ;
struct cifs_ntsd {void* gsidoffset; void* osidoffset; scalar_t__ sacloffset; void* dacloffset; int type; int revision; } ;
typedef int __u32 ;


 int FUNC_0 (struct cifs_sid*,struct cifs_sid*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(const struct cifs_ntsd *VAR_0,
    struct cifs_ntsd *VAR_1, __u32 VAR_2)
{
 struct cifs_sid *VAR_3, *VAR_4;
 struct cifs_sid *VAR_5, *VAR_6;


 VAR_1->revision = VAR_0->revision;
 VAR_1->type = VAR_0->type;
 VAR_1->dacloffset = FUNC_1(sizeof(struct cifs_ntsd));
 VAR_1->sacloffset = 0;
 VAR_1->osidoffset = FUNC_1(VAR_2);
 VAR_1->gsidoffset = FUNC_1(VAR_2 + sizeof(struct cifs_sid));


 VAR_3 = (struct cifs_sid *)((char *)VAR_0 +
    FUNC_2(VAR_0->osidoffset));
 VAR_5 = (struct cifs_sid *)((char *)VAR_1 + VAR_2);
 FUNC_0(VAR_5, VAR_3);


 VAR_4 = (struct cifs_sid *)((char *)VAR_0 +
    FUNC_2(VAR_0->gsidoffset));
 VAR_6 = (struct cifs_sid *)((char *)VAR_1 + VAR_2 +
     sizeof(struct cifs_sid));
 FUNC_0(VAR_6, VAR_4);

 return;
}
