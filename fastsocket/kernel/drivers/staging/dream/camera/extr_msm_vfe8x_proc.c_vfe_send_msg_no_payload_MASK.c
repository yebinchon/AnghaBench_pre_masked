
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfe_message {int _d; } ;
typedef enum VFE_MESSAGE_ID { ____Placeholder_VFE_MESSAGE_ID } VFE_MESSAGE_ID ;


 int VAR_0 ;
 struct vfe_message* FUNC_0 (int,int ) ;
 int FUNC_1 (int,struct vfe_message*,int ) ;

__attribute__((used)) static void FUNC_2(enum VFE_MESSAGE_ID VAR_1)
{
 struct vfe_message *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return;

 VAR_2->_d = VAR_1;
 FUNC_1(VAR_1, VAR_2, 0);
}
