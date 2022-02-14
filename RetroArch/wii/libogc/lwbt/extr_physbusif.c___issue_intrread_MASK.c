
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct usbtxbuf {void* rpData; int txsize; } ;
typedef int s32 ;
struct TYPE_5__ {int openstate; int hci_evt; int fd; } ;
struct TYPE_4__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,void*,int ,struct usbtxbuf*) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static s32 FUNC_4()
{
 s32 VAR_5;
 u32 VAR_6;
 u8 *VAR_7;
 struct usbtxbuf *VAR_8;

 if(VAR_3.openstate!=0x0002) return VAR_1;

 VAR_8 = (struct usbtxbuf*)FUNC_3(&VAR_4);
 if(VAR_8!=((void*)0)) {
  VAR_7 = (u8*)((u32)VAR_8 + sizeof(struct usbtxbuf));
  VAR_8->rpData = (void*)FUNC_1(VAR_7);
  VAR_6 = (VAR_4.size - ((u32)VAR_8->rpData - (u32)VAR_8));
  VAR_8->txsize = FUNC_0(VAR_6);
  VAR_5 = FUNC_2(VAR_3.fd,VAR_3.hci_evt,VAR_8->txsize,VAR_8->rpData,VAR_2,VAR_8);
 } else
  VAR_5 = VAR_0;

 return VAR_5;
}
