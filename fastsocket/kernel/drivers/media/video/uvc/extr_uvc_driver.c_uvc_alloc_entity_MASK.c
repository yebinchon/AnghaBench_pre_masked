
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct uvc_entity {int type; unsigned int bNrInPins; int * baSourceID; int id; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 struct uvc_entity* FUNC_0 (unsigned int,int ) ;

__attribute__((used)) static struct uvc_entity *FUNC_1(u16 VAR_2, u8 VAR_3,
  unsigned int VAR_4, unsigned int VAR_5)
{
 struct uvc_entity *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_7 = (VAR_2 & VAR_1) ? VAR_4 : VAR_4 - 1;
 VAR_8 = sizeof(*VAR_6) + VAR_5 + VAR_7;
 VAR_6 = FUNC_0(VAR_8, VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->id = VAR_3;
 VAR_6->type = VAR_2;

 VAR_6->bNrInPins = VAR_7;
 VAR_6->baSourceID = ((__u8 *)VAR_6) + sizeof(*VAR_6) + VAR_5;

 return VAR_6;
}
