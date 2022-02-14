
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* input; scalar_t__ inputfc; int cspecial; int type; } ;
typedef TYPE_1__ FCEUGI ;


 int FUNC_0 (int ) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(FCEUGI *VAR_4)
{
 VAR_3=VAR_4->type;

 VAR_0[0]=VAR_1[0];
 VAR_0[1]=VAR_1[1];
 VAR_0[2]=VAR_1[2];

 if(VAR_4->input[0]>=0)
  VAR_0[0]=VAR_4->input[0];
 if(VAR_4->input[1]>=0)
  VAR_0[1]=VAR_4->input[1];
 if(VAR_4->inputfc>=0)
  VAR_0[2]=VAR_4->inputfc;
 VAR_2 = VAR_4->cspecial;




}
