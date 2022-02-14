
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct iscsi_conn {int dummy; } ;
struct TYPE_4__ {struct iscsi_conn* data; } ;
struct TYPE_5__ {TYPE_1__ arg; } ;
typedef TYPE_2__ read_descriptor_t ;


 int FUNC_0 (struct iscsi_conn*,char*,scalar_t__,...) ;
 int VAR_0 ;
 unsigned int FUNC_1 (struct iscsi_conn*,struct sk_buff*,unsigned int,int ,int*) ;

__attribute__((used)) static int FUNC_2(read_descriptor_t *VAR_1, struct sk_buff *VAR_2,
        unsigned int VAR_3, size_t VAR_4)
{
 struct iscsi_conn *VAR_5 = VAR_1->arg.data;
 unsigned int VAR_6, VAR_7 = 0;
 int VAR_8;

 FUNC_0(VAR_5, "in %d bytes\n", VAR_2->len - VAR_3);

 do {
  VAR_8 = 0;
  VAR_6 = FUNC_1(VAR_5, VAR_2, VAR_3, 0, &VAR_8);
  VAR_3 += VAR_6;
  VAR_7 += VAR_6;
 } while (VAR_6 != 0 && VAR_8 != VAR_0);

 FUNC_0(VAR_5, "read %d bytes status %d\n",
    VAR_2->len - VAR_3, VAR_8);
 return VAR_7;
}
