
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char * FUNC_0(int VAR_0)
{
 const char * VAR_1 = ((void*)0);
 switch(VAR_0) {
 case 131:
  VAR_1 = "Success";
  break;
 case 130:
  VAR_1 = "Miniupnpc Unknown Error";
  break;
 case 133:
  VAR_1 = "Miniupnpc Invalid Arguments";
  break;
 case 132:
  VAR_1 = "Miniupnpc Invalid response";
  break;
 case 128:
  VAR_1 = "Miniupnpc Socket error";
  break;
 case 129:
  VAR_1 = "Miniupnpc Memory allocation error";
  break;
 case 401:
  VAR_1 = "Invalid Action";
  break;
 case 402:
  VAR_1 = "Invalid Args";
  break;
 case 501:
  VAR_1 = "Action Failed";
  break;
 case 606:
  VAR_1 = "Action not authorized";
  break;
 case 701:
  VAR_1 = "PinholeSpaceExhausted";
  break;
 case 702:
  VAR_1 = "FirewallDisabled";
  break;
 case 703:
  VAR_1 = "InboundPinholeNotAllowed";
  break;
 case 704:
  VAR_1 = "NoSuchEntry";
  break;
 case 705:
  VAR_1 = "ProtocolNotSupported";
  break;
 case 706:
  VAR_1 = "InternalPortWildcardingNotAllowed";
  break;
 case 707:
  VAR_1 = "ProtocolWildcardingNotAllowed";
  break;
 case 708:
  VAR_1 = "WildcardNotPermittedInSrcIP";
  break;
 case 709:
  VAR_1 = "NoPacketSent";
  break;
 case 713:
  VAR_1 = "SpecifiedArrayIndexInvalid";
  break;
 case 714:
  VAR_1 = "NoSuchEntryInArray";
  break;
 case 715:
  VAR_1 = "WildCardNotPermittedInSrcIP";
  break;
 case 716:
  VAR_1 = "WildCardNotPermittedInExtPort";
  break;
 case 718:
  VAR_1 = "ConflictInMappingEntry";
  break;
 case 724:
  VAR_1 = "SamePortValuesRequired";
  break;
 case 725:
  VAR_1 = "OnlyPermanentLeasesSupported";
  break;
 case 726:
  VAR_1 = "RemoteHostOnlySupportsWildcard";
  break;
 case 727:
  VAR_1 = "ExternalPortOnlySupportsWildcard";
  break;
 default:
  VAR_1 = "UnknownError";
  break;
 }
 return VAR_1;
}
