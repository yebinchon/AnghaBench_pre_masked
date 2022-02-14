
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int memory_object_t ;
typedef int memory_object_control_t ;
typedef int kern_return_t ;
typedef TYPE_2__* compressor_pager_t ;
struct TYPE_6__ {int mo_control; } ;
struct TYPE_7__ {TYPE_1__ cpgr_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

kern_return_t
FUNC_4(
 memory_object_t VAR_2)
{
 memory_object_control_t VAR_3;
 compressor_pager_t VAR_4;





 FUNC_1(VAR_2, VAR_4);
 FUNC_0(VAR_4);
 VAR_3 = VAR_4->cpgr_hdr.mo_control;
 VAR_4->cpgr_hdr.mo_control = VAR_1;

 FUNC_2(VAR_4);




 FUNC_3(VAR_3);
 return VAR_0;
}
