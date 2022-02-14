
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kevent_qos_s {int flags; int data; int fflags; int qos; int filter; int ident; } ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,struct kevent_qos_s*,int,struct kevent_qos_s*,int,int *,int *,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_8, int16_t VAR_9)
{
 struct kevent_qos_s VAR_10[] = {{
  .ident = (uint64_t)VAR_8,
  .filter = VAR_9,
  .flags = VAR_1 | VAR_2 | VAR_0,
  .qos = (int32_t)FUNC_1(VAR_3,
    0, 0),
  .fflags = VAR_6,
  .data = 1
 }};

 int VAR_11 = FUNC_2(-1, VAR_10, 1, VAR_10, 1, ((void*)0), ((void*)0),
   VAR_5 | VAR_4);
 VAR_7; FUNC_0(VAR_11, "reenable workq in kevent_qos");
}
