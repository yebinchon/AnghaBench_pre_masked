
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UNICODE_STRING ;
typedef int UNICODE ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
typedef void* UCHAR ;
struct TYPE_11__ {int* MacAddress; int HardwareID; int HardwareID_Raw; int NdisConfig; } ;
struct TYPE_10__ {int Buffer; scalar_t__ MaximumLength; } ;
struct TYPE_8__ {int IntegerData; int StringData; } ;
struct TYPE_9__ {scalar_t__ ParameterType; TYPE_1__ ParameterData; } ;
typedef int NDIS_STATUS ;
typedef int NDIS_HANDLE ;
typedef TYPE_2__ NDIS_CONFIGURATION_PARAMETER ;
typedef int BOOL ;
typedef TYPE_3__ ANSI_STRING ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *,TYPE_2__**,int ,int ,scalar_t__) ;
 int FUNC_6 (int *,void**,scalar_t__*,int ) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (int*,void*,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (scalar_t__) ;
 int * FUNC_12 (char*) ;
 int VAR_6 ;
 int FUNC_13 (int ) ;
 TYPE_4__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_14 (int ,int ) ;

BOOL FUNC_15()
{
 void *VAR_10;
 NDIS_STATUS VAR_11;
 UINT VAR_12;
 NDIS_HANDLE VAR_13;
 NDIS_CONFIGURATION_PARAMETER *VAR_14;
 UNICODE *VAR_15;
 ANSI_STRING VAR_16;
 UNICODE_STRING *VAR_17;
 UINT VAR_18;
 BOOL VAR_19;


 FUNC_4(&VAR_11, &VAR_13, VAR_7->NdisConfig);
 if (FUNC_2(VAR_11))
 {

  return VAR_0;
 }


 FUNC_6(&VAR_11, &VAR_10, &VAR_12, VAR_13);
 if (FUNC_2(VAR_11))
 {

  FUNC_3(VAR_13);
  return VAR_0;
 }


 if (VAR_12 != VAR_2)
 {

  FUNC_3(VAR_13);
  return VAR_0;
 }
 FUNC_8(VAR_7->MacAddress, VAR_10, VAR_2);

 if (VAR_7->MacAddress[0] == 0x00 &&
  VAR_7->MacAddress[1] == 0x00 &&
  VAR_7->MacAddress[2] == 0x01 &&
  VAR_7->MacAddress[3] == 0x00 &&
  VAR_7->MacAddress[4] == 0x00 &&
  VAR_7->MacAddress[5] == 0x01)
 {

  UINT VAR_20 = (UINT)((UINT64)VAR_7);

  VAR_7->MacAddress[0] = 0x00;
  VAR_7->MacAddress[1] = 0xAD;
  VAR_7->MacAddress[2] = ((UCHAR *)(&VAR_20))[0];
  VAR_7->MacAddress[3] = ((UCHAR *)(&VAR_20))[1];
  VAR_7->MacAddress[4] = ((UCHAR *)(&VAR_20))[2];
  VAR_7->MacAddress[5] = ((UCHAR *)(&VAR_20))[3];
 }


 VAR_15 = FUNC_12("MatchingDeviceId");


 FUNC_5(&VAR_11, &VAR_14, VAR_13, FUNC_1(VAR_15), VAR_5);
 FUNC_0(VAR_15);
 if (FUNC_2(VAR_11))
 {

  FUNC_3(VAR_13);
  return VAR_0;
 }

 if (VAR_14->ParameterType != VAR_5)
 {

  FUNC_3(VAR_13);
  return VAR_0;
 }
 VAR_17 = &VAR_14->ParameterData.StringData;


 FUNC_10(&VAR_16, sizeof(ANSI_STRING));
 VAR_16.MaximumLength = VAR_1 - 1;
 VAR_16.Buffer = FUNC_11(VAR_1);


 FUNC_7(&VAR_16, VAR_17);

 FUNC_14(VAR_7->HardwareID, VAR_16.Buffer);
 FUNC_14(VAR_7->HardwareID_Raw, VAR_7->HardwareID);

 FUNC_13(VAR_7->HardwareID);

 FUNC_9(VAR_16.Buffer);


 VAR_15 = FUNC_12("MaxSpeed");
 FUNC_5(&VAR_11, &VAR_14, VAR_13, FUNC_1(VAR_15), VAR_4);
 FUNC_0(VAR_15);

 if (FUNC_2(VAR_11) || VAR_14->ParameterType != VAR_4)
 {
  VAR_18 = VAR_3;
 }
 else
 {
  VAR_18 = VAR_14->ParameterData.IntegerData * 10000;
 }

 VAR_9 = VAR_18;


 VAR_15 = FUNC_12("KeepLink");
 FUNC_5(&VAR_11, &VAR_14, VAR_13, FUNC_1(VAR_15), VAR_4);
 FUNC_0(VAR_15);

 if (FUNC_2(VAR_11) || VAR_14->ParameterType != VAR_4)
 {
  VAR_19 = 0;
 }
 else
 {
  VAR_19 = (VAR_14->ParameterData.IntegerData == 0 ? 0 : 1);
 }

 VAR_8 = VAR_19;


 FUNC_3(VAR_13);

 return VAR_6;
}
