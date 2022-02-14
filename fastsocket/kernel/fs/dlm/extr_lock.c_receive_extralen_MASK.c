
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_length; } ;
struct dlm_message {TYPE_1__ m_header; } ;



__attribute__((used)) static int FUNC_0(struct dlm_message *VAR_0)
{
 return (VAR_0->m_header.h_length - sizeof(struct dlm_message));
}
